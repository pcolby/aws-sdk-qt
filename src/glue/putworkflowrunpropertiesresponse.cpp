// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putworkflowrunpropertiesresponse.h"
#include "putworkflowrunpropertiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::PutWorkflowRunPropertiesResponse
 * \brief The PutWorkflowRunPropertiesResponse class provides an interace for Glue PutWorkflowRunProperties responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::putWorkflowRunProperties
 */

/*!
 * Constructs a PutWorkflowRunPropertiesResponse object for \a reply to \a request, with parent \a parent.
 */
PutWorkflowRunPropertiesResponse::PutWorkflowRunPropertiesResponse(
        const PutWorkflowRunPropertiesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new PutWorkflowRunPropertiesResponsePrivate(this), parent)
{
    setRequest(new PutWorkflowRunPropertiesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutWorkflowRunPropertiesRequest * PutWorkflowRunPropertiesResponse::request() const
{
    Q_D(const PutWorkflowRunPropertiesResponse);
    return static_cast<const PutWorkflowRunPropertiesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue PutWorkflowRunProperties \a response.
 */
void PutWorkflowRunPropertiesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutWorkflowRunPropertiesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::PutWorkflowRunPropertiesResponsePrivate
 * \brief The PutWorkflowRunPropertiesResponsePrivate class provides private implementation for PutWorkflowRunPropertiesResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a PutWorkflowRunPropertiesResponsePrivate object with public implementation \a q.
 */
PutWorkflowRunPropertiesResponsePrivate::PutWorkflowRunPropertiesResponsePrivate(
    PutWorkflowRunPropertiesResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue PutWorkflowRunProperties response element from \a xml.
 */
void PutWorkflowRunPropertiesResponsePrivate::parsePutWorkflowRunPropertiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutWorkflowRunPropertiesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
