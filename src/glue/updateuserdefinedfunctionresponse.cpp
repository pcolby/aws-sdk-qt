// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateuserdefinedfunctionresponse.h"
#include "updateuserdefinedfunctionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::UpdateUserDefinedFunctionResponse
 * \brief The UpdateUserDefinedFunctionResponse class provides an interace for Glue UpdateUserDefinedFunction responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::updateUserDefinedFunction
 */

/*!
 * Constructs a UpdateUserDefinedFunctionResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateUserDefinedFunctionResponse::UpdateUserDefinedFunctionResponse(
        const UpdateUserDefinedFunctionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new UpdateUserDefinedFunctionResponsePrivate(this), parent)
{
    setRequest(new UpdateUserDefinedFunctionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateUserDefinedFunctionRequest * UpdateUserDefinedFunctionResponse::request() const
{
    Q_D(const UpdateUserDefinedFunctionResponse);
    return static_cast<const UpdateUserDefinedFunctionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue UpdateUserDefinedFunction \a response.
 */
void UpdateUserDefinedFunctionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateUserDefinedFunctionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::UpdateUserDefinedFunctionResponsePrivate
 * \brief The UpdateUserDefinedFunctionResponsePrivate class provides private implementation for UpdateUserDefinedFunctionResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a UpdateUserDefinedFunctionResponsePrivate object with public implementation \a q.
 */
UpdateUserDefinedFunctionResponsePrivate::UpdateUserDefinedFunctionResponsePrivate(
    UpdateUserDefinedFunctionResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue UpdateUserDefinedFunction response element from \a xml.
 */
void UpdateUserDefinedFunctionResponsePrivate::parseUpdateUserDefinedFunctionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateUserDefinedFunctionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
