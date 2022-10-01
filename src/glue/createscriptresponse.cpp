// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createscriptresponse.h"
#include "createscriptresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::CreateScriptResponse
 * \brief The CreateScriptResponse class provides an interace for Glue CreateScript responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::createScript
 */

/*!
 * Constructs a CreateScriptResponse object for \a reply to \a request, with parent \a parent.
 */
CreateScriptResponse::CreateScriptResponse(
        const CreateScriptRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new CreateScriptResponsePrivate(this), parent)
{
    setRequest(new CreateScriptRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateScriptRequest * CreateScriptResponse::request() const
{
    Q_D(const CreateScriptResponse);
    return static_cast<const CreateScriptRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue CreateScript \a response.
 */
void CreateScriptResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateScriptResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::CreateScriptResponsePrivate
 * \brief The CreateScriptResponsePrivate class provides private implementation for CreateScriptResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a CreateScriptResponsePrivate object with public implementation \a q.
 */
CreateScriptResponsePrivate::CreateScriptResponsePrivate(
    CreateScriptResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue CreateScript response element from \a xml.
 */
void CreateScriptResponsePrivate::parseCreateScriptResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateScriptResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
