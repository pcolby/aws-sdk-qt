// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletefunctionresponse.h"
#include "deletefunctionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::DeleteFunctionResponse
 * \brief The DeleteFunctionResponse class provides an interace for CloudFront DeleteFunction responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::deleteFunction
 */

/*!
 * Constructs a DeleteFunctionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteFunctionResponse::DeleteFunctionResponse(
        const DeleteFunctionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new DeleteFunctionResponsePrivate(this), parent)
{
    setRequest(new DeleteFunctionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteFunctionRequest * DeleteFunctionResponse::request() const
{
    Q_D(const DeleteFunctionResponse);
    return static_cast<const DeleteFunctionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront DeleteFunction \a response.
 */
void DeleteFunctionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteFunctionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::DeleteFunctionResponsePrivate
 * \brief The DeleteFunctionResponsePrivate class provides private implementation for DeleteFunctionResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a DeleteFunctionResponsePrivate object with public implementation \a q.
 */
DeleteFunctionResponsePrivate::DeleteFunctionResponsePrivate(
    DeleteFunctionResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront DeleteFunction response element from \a xml.
 */
void DeleteFunctionResponsePrivate::parseDeleteFunctionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteFunctionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
