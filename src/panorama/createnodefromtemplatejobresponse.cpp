// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createnodefromtemplatejobresponse.h"
#include "createnodefromtemplatejobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::CreateNodeFromTemplateJobResponse
 * \brief The CreateNodeFromTemplateJobResponse class provides an interace for Panorama CreateNodeFromTemplateJob responses.
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
 * \sa PanoramaClient::createNodeFromTemplateJob
 */

/*!
 * Constructs a CreateNodeFromTemplateJobResponse object for \a reply to \a request, with parent \a parent.
 */
CreateNodeFromTemplateJobResponse::CreateNodeFromTemplateJobResponse(
        const CreateNodeFromTemplateJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PanoramaResponse(new CreateNodeFromTemplateJobResponsePrivate(this), parent)
{
    setRequest(new CreateNodeFromTemplateJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateNodeFromTemplateJobRequest * CreateNodeFromTemplateJobResponse::request() const
{
    Q_D(const CreateNodeFromTemplateJobResponse);
    return static_cast<const CreateNodeFromTemplateJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Panorama CreateNodeFromTemplateJob \a response.
 */
void CreateNodeFromTemplateJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateNodeFromTemplateJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Panorama::CreateNodeFromTemplateJobResponsePrivate
 * \brief The CreateNodeFromTemplateJobResponsePrivate class provides private implementation for CreateNodeFromTemplateJobResponse.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a CreateNodeFromTemplateJobResponsePrivate object with public implementation \a q.
 */
CreateNodeFromTemplateJobResponsePrivate::CreateNodeFromTemplateJobResponsePrivate(
    CreateNodeFromTemplateJobResponse * const q) : PanoramaResponsePrivate(q)
{

}

/*!
 * Parses a Panorama CreateNodeFromTemplateJob response element from \a xml.
 */
void CreateNodeFromTemplateJobResponsePrivate::parseCreateNodeFromTemplateJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateNodeFromTemplateJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Panorama
} // namespace QtAws
