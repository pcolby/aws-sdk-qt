// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateschemaresponse.h"
#include "updateschemaresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::UpdateSchemaResponse
 * \brief The UpdateSchemaResponse class provides an interace for Glue UpdateSchema responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::updateSchema
 */

/*!
 * Constructs a UpdateSchemaResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateSchemaResponse::UpdateSchemaResponse(
        const UpdateSchemaRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new UpdateSchemaResponsePrivate(this), parent)
{
    setRequest(new UpdateSchemaRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateSchemaRequest * UpdateSchemaResponse::request() const
{
    Q_D(const UpdateSchemaResponse);
    return static_cast<const UpdateSchemaRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue UpdateSchema \a response.
 */
void UpdateSchemaResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateSchemaResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::UpdateSchemaResponsePrivate
 * \brief The UpdateSchemaResponsePrivate class provides private implementation for UpdateSchemaResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a UpdateSchemaResponsePrivate object with public implementation \a q.
 */
UpdateSchemaResponsePrivate::UpdateSchemaResponsePrivate(
    UpdateSchemaResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue UpdateSchema response element from \a xml.
 */
void UpdateSchemaResponsePrivate::parseUpdateSchemaResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateSchemaResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
