// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateconfigurationresponse.h"
#include "updateconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::UpdateConfigurationResponse
 * \brief The UpdateConfigurationResponse class provides an interace for Inspector2 UpdateConfiguration responses.
 *
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 *
 * \sa Inspector2Client::updateConfiguration
 */

/*!
 * Constructs a UpdateConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateConfigurationResponse::UpdateConfigurationResponse(
        const UpdateConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Inspector2Response(new UpdateConfigurationResponsePrivate(this), parent)
{
    setRequest(new UpdateConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateConfigurationRequest * UpdateConfigurationResponse::request() const
{
    Q_D(const UpdateConfigurationResponse);
    return static_cast<const UpdateConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector2 UpdateConfiguration \a response.
 */
void UpdateConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector2::UpdateConfigurationResponsePrivate
 * \brief The UpdateConfigurationResponsePrivate class provides private implementation for UpdateConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a UpdateConfigurationResponsePrivate object with public implementation \a q.
 */
UpdateConfigurationResponsePrivate::UpdateConfigurationResponsePrivate(
    UpdateConfigurationResponse * const q) : Inspector2ResponsePrivate(q)
{

}

/*!
 * Parses a Inspector2 UpdateConfiguration response element from \a xml.
 */
void UpdateConfigurationResponsePrivate::parseUpdateConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector2
} // namespace QtAws
