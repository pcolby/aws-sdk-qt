// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecustompluginresponse.h"
#include "deletecustompluginresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KafkaConnect {

/*!
 * \class QtAws::KafkaConnect::DeleteCustomPluginResponse
 * \brief The DeleteCustomPluginResponse class provides an interace for KafkaConnect DeleteCustomPlugin responses.
 *
 * \inmodule QtAwsKafkaConnect
 *
 *
 * \sa KafkaConnectClient::deleteCustomPlugin
 */

/*!
 * Constructs a DeleteCustomPluginResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteCustomPluginResponse::DeleteCustomPluginResponse(
        const DeleteCustomPluginRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KafkaConnectResponse(new DeleteCustomPluginResponsePrivate(this), parent)
{
    setRequest(new DeleteCustomPluginRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteCustomPluginRequest * DeleteCustomPluginResponse::request() const
{
    Q_D(const DeleteCustomPluginResponse);
    return static_cast<const DeleteCustomPluginRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KafkaConnect DeleteCustomPlugin \a response.
 */
void DeleteCustomPluginResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteCustomPluginResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KafkaConnect::DeleteCustomPluginResponsePrivate
 * \brief The DeleteCustomPluginResponsePrivate class provides private implementation for DeleteCustomPluginResponse.
 * \internal
 *
 * \inmodule QtAwsKafkaConnect
 */

/*!
 * Constructs a DeleteCustomPluginResponsePrivate object with public implementation \a q.
 */
DeleteCustomPluginResponsePrivate::DeleteCustomPluginResponsePrivate(
    DeleteCustomPluginResponse * const q) : KafkaConnectResponsePrivate(q)
{

}

/*!
 * Parses a KafkaConnect DeleteCustomPlugin response element from \a xml.
 */
void DeleteCustomPluginResponsePrivate::parseDeleteCustomPluginResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteCustomPluginResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KafkaConnect
} // namespace QtAws
