// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createinvalidationresponse.h"
#include "createinvalidationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::CreateInvalidationResponse
 * \brief The CreateInvalidationResponse class provides an interace for CloudFront CreateInvalidation responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::createInvalidation
 */

/*!
 * Constructs a CreateInvalidationResponse object for \a reply to \a request, with parent \a parent.
 */
CreateInvalidationResponse::CreateInvalidationResponse(
        const CreateInvalidationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new CreateInvalidationResponsePrivate(this), parent)
{
    setRequest(new CreateInvalidationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateInvalidationRequest * CreateInvalidationResponse::request() const
{
    Q_D(const CreateInvalidationResponse);
    return static_cast<const CreateInvalidationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront CreateInvalidation \a response.
 */
void CreateInvalidationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateInvalidationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::CreateInvalidationResponsePrivate
 * \brief The CreateInvalidationResponsePrivate class provides private implementation for CreateInvalidationResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a CreateInvalidationResponsePrivate object with public implementation \a q.
 */
CreateInvalidationResponsePrivate::CreateInvalidationResponsePrivate(
    CreateInvalidationResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront CreateInvalidation response element from \a xml.
 */
void CreateInvalidationResponsePrivate::parseCreateInvalidationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateInvalidationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
