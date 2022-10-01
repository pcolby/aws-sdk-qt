// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateaccesscontrolconfigurationresponse.h"
#include "updateaccesscontrolconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::UpdateAccessControlConfigurationResponse
 * \brief The UpdateAccessControlConfigurationResponse class provides an interace for Kendra UpdateAccessControlConfiguration responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::updateAccessControlConfiguration
 */

/*!
 * Constructs a UpdateAccessControlConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateAccessControlConfigurationResponse::UpdateAccessControlConfigurationResponse(
        const UpdateAccessControlConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new UpdateAccessControlConfigurationResponsePrivate(this), parent)
{
    setRequest(new UpdateAccessControlConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateAccessControlConfigurationRequest * UpdateAccessControlConfigurationResponse::request() const
{
    Q_D(const UpdateAccessControlConfigurationResponse);
    return static_cast<const UpdateAccessControlConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra UpdateAccessControlConfiguration \a response.
 */
void UpdateAccessControlConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateAccessControlConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::UpdateAccessControlConfigurationResponsePrivate
 * \brief The UpdateAccessControlConfigurationResponsePrivate class provides private implementation for UpdateAccessControlConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a UpdateAccessControlConfigurationResponsePrivate object with public implementation \a q.
 */
UpdateAccessControlConfigurationResponsePrivate::UpdateAccessControlConfigurationResponsePrivate(
    UpdateAccessControlConfigurationResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra UpdateAccessControlConfiguration response element from \a xml.
 */
void UpdateAccessControlConfigurationResponsePrivate::parseUpdateAccessControlConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAccessControlConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
