// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "removeapplicationinstanceresponse.h"
#include "removeapplicationinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::RemoveApplicationInstanceResponse
 * \brief The RemoveApplicationInstanceResponse class provides an interace for Panorama RemoveApplicationInstance responses.
 *
 * \inmodule QtAwsPanorama
 *
 *  <fullname>AWS Panorama</fullname>
 * 
 *  <b>Overview</b>
 * 
 *  </p
 * 
 *  This is the <i>AWS Panorama API Reference</i>. For an introduction to the service, see <a
 *  href="https://docs.aws.amazon.com/panorama/latest/dev/panorama-welcome.html">What is AWS Panorama?</a> in the <i>AWS
 *  Panorama Developer
 *
 * \sa PanoramaClient::removeApplicationInstance
 */

/*!
 * Constructs a RemoveApplicationInstanceResponse object for \a reply to \a request, with parent \a parent.
 */
RemoveApplicationInstanceResponse::RemoveApplicationInstanceResponse(
        const RemoveApplicationInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PanoramaResponse(new RemoveApplicationInstanceResponsePrivate(this), parent)
{
    setRequest(new RemoveApplicationInstanceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RemoveApplicationInstanceRequest * RemoveApplicationInstanceResponse::request() const
{
    Q_D(const RemoveApplicationInstanceResponse);
    return static_cast<const RemoveApplicationInstanceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Panorama RemoveApplicationInstance \a response.
 */
void RemoveApplicationInstanceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RemoveApplicationInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Panorama::RemoveApplicationInstanceResponsePrivate
 * \brief The RemoveApplicationInstanceResponsePrivate class provides private implementation for RemoveApplicationInstanceResponse.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a RemoveApplicationInstanceResponsePrivate object with public implementation \a q.
 */
RemoveApplicationInstanceResponsePrivate::RemoveApplicationInstanceResponsePrivate(
    RemoveApplicationInstanceResponse * const q) : PanoramaResponsePrivate(q)
{

}

/*!
 * Parses a Panorama RemoveApplicationInstance response element from \a xml.
 */
void RemoveApplicationInstanceResponsePrivate::parseRemoveApplicationInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemoveApplicationInstanceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Panorama
} // namespace QtAws
