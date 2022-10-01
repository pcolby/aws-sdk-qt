// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createfunctionresponse.h"
#include "createfunctionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::CreateFunctionResponse
 * \brief The CreateFunctionResponse class provides an interace for CloudFront CreateFunction responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::createFunction
 */

/*!
 * Constructs a CreateFunctionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateFunctionResponse::CreateFunctionResponse(
        const CreateFunctionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new CreateFunctionResponsePrivate(this), parent)
{
    setRequest(new CreateFunctionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateFunctionRequest * CreateFunctionResponse::request() const
{
    Q_D(const CreateFunctionResponse);
    return static_cast<const CreateFunctionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront CreateFunction \a response.
 */
void CreateFunctionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateFunctionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::CreateFunctionResponsePrivate
 * \brief The CreateFunctionResponsePrivate class provides private implementation for CreateFunctionResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a CreateFunctionResponsePrivate object with public implementation \a q.
 */
CreateFunctionResponsePrivate::CreateFunctionResponsePrivate(
    CreateFunctionResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront CreateFunction response element from \a xml.
 */
void CreateFunctionResponsePrivate::parseCreateFunctionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateFunctionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
