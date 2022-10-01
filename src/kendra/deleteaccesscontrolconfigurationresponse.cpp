// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteaccesscontrolconfigurationresponse.h"
#include "deleteaccesscontrolconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::DeleteAccessControlConfigurationResponse
 * \brief The DeleteAccessControlConfigurationResponse class provides an interace for Kendra DeleteAccessControlConfiguration responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::deleteAccessControlConfiguration
 */

/*!
 * Constructs a DeleteAccessControlConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAccessControlConfigurationResponse::DeleteAccessControlConfigurationResponse(
        const DeleteAccessControlConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new DeleteAccessControlConfigurationResponsePrivate(this), parent)
{
    setRequest(new DeleteAccessControlConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAccessControlConfigurationRequest * DeleteAccessControlConfigurationResponse::request() const
{
    Q_D(const DeleteAccessControlConfigurationResponse);
    return static_cast<const DeleteAccessControlConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra DeleteAccessControlConfiguration \a response.
 */
void DeleteAccessControlConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAccessControlConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::DeleteAccessControlConfigurationResponsePrivate
 * \brief The DeleteAccessControlConfigurationResponsePrivate class provides private implementation for DeleteAccessControlConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a DeleteAccessControlConfigurationResponsePrivate object with public implementation \a q.
 */
DeleteAccessControlConfigurationResponsePrivate::DeleteAccessControlConfigurationResponsePrivate(
    DeleteAccessControlConfigurationResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra DeleteAccessControlConfiguration response element from \a xml.
 */
void DeleteAccessControlConfigurationResponsePrivate::parseDeleteAccessControlConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAccessControlConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
