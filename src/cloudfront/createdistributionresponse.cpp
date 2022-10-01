// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdistributionresponse.h"
#include "createdistributionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::CreateDistributionResponse
 * \brief The CreateDistributionResponse class provides an interace for CloudFront CreateDistribution responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::createDistribution
 */

/*!
 * Constructs a CreateDistributionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDistributionResponse::CreateDistributionResponse(
        const CreateDistributionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new CreateDistributionResponsePrivate(this), parent)
{
    setRequest(new CreateDistributionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDistributionRequest * CreateDistributionResponse::request() const
{
    Q_D(const CreateDistributionResponse);
    return static_cast<const CreateDistributionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront CreateDistribution \a response.
 */
void CreateDistributionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDistributionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::CreateDistributionResponsePrivate
 * \brief The CreateDistributionResponsePrivate class provides private implementation for CreateDistributionResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a CreateDistributionResponsePrivate object with public implementation \a q.
 */
CreateDistributionResponsePrivate::CreateDistributionResponsePrivate(
    CreateDistributionResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront CreateDistribution response element from \a xml.
 */
void CreateDistributionResponsePrivate::parseCreateDistributionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDistributionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
