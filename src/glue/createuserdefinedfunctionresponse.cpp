// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createuserdefinedfunctionresponse.h"
#include "createuserdefinedfunctionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::CreateUserDefinedFunctionResponse
 * \brief The CreateUserDefinedFunctionResponse class provides an interace for Glue CreateUserDefinedFunction responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::createUserDefinedFunction
 */

/*!
 * Constructs a CreateUserDefinedFunctionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateUserDefinedFunctionResponse::CreateUserDefinedFunctionResponse(
        const CreateUserDefinedFunctionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new CreateUserDefinedFunctionResponsePrivate(this), parent)
{
    setRequest(new CreateUserDefinedFunctionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateUserDefinedFunctionRequest * CreateUserDefinedFunctionResponse::request() const
{
    Q_D(const CreateUserDefinedFunctionResponse);
    return static_cast<const CreateUserDefinedFunctionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue CreateUserDefinedFunction \a response.
 */
void CreateUserDefinedFunctionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateUserDefinedFunctionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::CreateUserDefinedFunctionResponsePrivate
 * \brief The CreateUserDefinedFunctionResponsePrivate class provides private implementation for CreateUserDefinedFunctionResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a CreateUserDefinedFunctionResponsePrivate object with public implementation \a q.
 */
CreateUserDefinedFunctionResponsePrivate::CreateUserDefinedFunctionResponsePrivate(
    CreateUserDefinedFunctionResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue CreateUserDefinedFunction response element from \a xml.
 */
void CreateUserDefinedFunctionResponsePrivate::parseCreateUserDefinedFunctionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateUserDefinedFunctionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
