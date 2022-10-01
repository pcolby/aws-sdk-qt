// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createapplicationinstanceresponse.h"
#include "createapplicationinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::CreateApplicationInstanceResponse
 * \brief The CreateApplicationInstanceResponse class provides an interace for Panorama CreateApplicationInstance responses.
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
 * \sa PanoramaClient::createApplicationInstance
 */

/*!
 * Constructs a CreateApplicationInstanceResponse object for \a reply to \a request, with parent \a parent.
 */
CreateApplicationInstanceResponse::CreateApplicationInstanceResponse(
        const CreateApplicationInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PanoramaResponse(new CreateApplicationInstanceResponsePrivate(this), parent)
{
    setRequest(new CreateApplicationInstanceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateApplicationInstanceRequest * CreateApplicationInstanceResponse::request() const
{
    Q_D(const CreateApplicationInstanceResponse);
    return static_cast<const CreateApplicationInstanceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Panorama CreateApplicationInstance \a response.
 */
void CreateApplicationInstanceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateApplicationInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Panorama::CreateApplicationInstanceResponsePrivate
 * \brief The CreateApplicationInstanceResponsePrivate class provides private implementation for CreateApplicationInstanceResponse.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a CreateApplicationInstanceResponsePrivate object with public implementation \a q.
 */
CreateApplicationInstanceResponsePrivate::CreateApplicationInstanceResponsePrivate(
    CreateApplicationInstanceResponse * const q) : PanoramaResponsePrivate(q)
{

}

/*!
 * Parses a Panorama CreateApplicationInstance response element from \a xml.
 */
void CreateApplicationInstanceResponsePrivate::parseCreateApplicationInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateApplicationInstanceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Panorama
} // namespace QtAws
