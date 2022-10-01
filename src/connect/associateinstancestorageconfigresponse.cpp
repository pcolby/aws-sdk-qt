// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associateinstancestorageconfigresponse.h"
#include "associateinstancestorageconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Connect {

/*!
 * \class QtAws::Connect::AssociateInstanceStorageConfigResponse
 * \brief The AssociateInstanceStorageConfigResponse class provides an interace for Connect AssociateInstanceStorageConfig responses.
 *
 * \inmodule QtAwsConnect
 *
 *  Amazon Connect is a cloud-based contact center solution that you use to set up and manage a customer contact center and
 *  provide reliable customer engagement at any
 * 
 *  scale>
 * 
 *  Amazon Connect provides metrics and real-time reporting that enable you to optimize contact routing. You can also
 *  resolve customer issues more efficiently by getting customers in touch with the appropriate
 * 
 *  agents>
 * 
 *  There are limits to the number of Amazon Connect resources that you can create. There are also limits to the number of
 *  requests that you can make per second. For more information, see <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/amazon-connect-service-limits.html">Amazon Connect Service
 *  Quotas</a> in the <i>Amazon Connect Administrator
 * 
 *  Guide</i>>
 * 
 *  You can connect programmatically to an Amazon Web Services service by using an endpoint. For a list of Amazon Connect
 *  endpoints, see <a href="https://docs.aws.amazon.com/general/latest/gr/connect_region.html">Amazon Connect
 * 
 *  Endpoints</a>> <note>
 * 
 *  Working with flows? Check out the <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/flow-language.html">Amazon Connect Flow
 *
 * \sa ConnectClient::associateInstanceStorageConfig
 */

/*!
 * Constructs a AssociateInstanceStorageConfigResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateInstanceStorageConfigResponse::AssociateInstanceStorageConfigResponse(
        const AssociateInstanceStorageConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConnectResponse(new AssociateInstanceStorageConfigResponsePrivate(this), parent)
{
    setRequest(new AssociateInstanceStorageConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateInstanceStorageConfigRequest * AssociateInstanceStorageConfigResponse::request() const
{
    Q_D(const AssociateInstanceStorageConfigResponse);
    return static_cast<const AssociateInstanceStorageConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Connect AssociateInstanceStorageConfig \a response.
 */
void AssociateInstanceStorageConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateInstanceStorageConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Connect::AssociateInstanceStorageConfigResponsePrivate
 * \brief The AssociateInstanceStorageConfigResponsePrivate class provides private implementation for AssociateInstanceStorageConfigResponse.
 * \internal
 *
 * \inmodule QtAwsConnect
 */

/*!
 * Constructs a AssociateInstanceStorageConfigResponsePrivate object with public implementation \a q.
 */
AssociateInstanceStorageConfigResponsePrivate::AssociateInstanceStorageConfigResponsePrivate(
    AssociateInstanceStorageConfigResponse * const q) : ConnectResponsePrivate(q)
{

}

/*!
 * Parses a Connect AssociateInstanceStorageConfig response element from \a xml.
 */
void AssociateInstanceStorageConfigResponsePrivate::parseAssociateInstanceStorageConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateInstanceStorageConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Connect
} // namespace QtAws
