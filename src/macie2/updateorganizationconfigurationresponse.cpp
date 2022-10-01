// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateorganizationconfigurationresponse.h"
#include "updateorganizationconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::UpdateOrganizationConfigurationResponse
 * \brief The UpdateOrganizationConfigurationResponse class provides an interace for Macie2 UpdateOrganizationConfiguration responses.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::updateOrganizationConfiguration
 */

/*!
 * Constructs a UpdateOrganizationConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateOrganizationConfigurationResponse::UpdateOrganizationConfigurationResponse(
        const UpdateOrganizationConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Macie2Response(new UpdateOrganizationConfigurationResponsePrivate(this), parent)
{
    setRequest(new UpdateOrganizationConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateOrganizationConfigurationRequest * UpdateOrganizationConfigurationResponse::request() const
{
    Q_D(const UpdateOrganizationConfigurationResponse);
    return static_cast<const UpdateOrganizationConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Macie2 UpdateOrganizationConfiguration \a response.
 */
void UpdateOrganizationConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateOrganizationConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Macie2::UpdateOrganizationConfigurationResponsePrivate
 * \brief The UpdateOrganizationConfigurationResponsePrivate class provides private implementation for UpdateOrganizationConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a UpdateOrganizationConfigurationResponsePrivate object with public implementation \a q.
 */
UpdateOrganizationConfigurationResponsePrivate::UpdateOrganizationConfigurationResponsePrivate(
    UpdateOrganizationConfigurationResponse * const q) : Macie2ResponsePrivate(q)
{

}

/*!
 * Parses a Macie2 UpdateOrganizationConfiguration response element from \a xml.
 */
void UpdateOrganizationConfigurationResponsePrivate::parseUpdateOrganizationConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateOrganizationConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Macie2
} // namespace QtAws
