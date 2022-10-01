// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createcomponentresponse.h"
#include "createcomponentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::CreateComponentResponse
 * \brief The CreateComponentResponse class provides an interace for ImageBuilder CreateComponent responses.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::createComponent
 */

/*!
 * Constructs a CreateComponentResponse object for \a reply to \a request, with parent \a parent.
 */
CreateComponentResponse::CreateComponentResponse(
        const CreateComponentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ImageBuilderResponse(new CreateComponentResponsePrivate(this), parent)
{
    setRequest(new CreateComponentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateComponentRequest * CreateComponentResponse::request() const
{
    Q_D(const CreateComponentResponse);
    return static_cast<const CreateComponentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ImageBuilder CreateComponent \a response.
 */
void CreateComponentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateComponentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ImageBuilder::CreateComponentResponsePrivate
 * \brief The CreateComponentResponsePrivate class provides private implementation for CreateComponentResponse.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a CreateComponentResponsePrivate object with public implementation \a q.
 */
CreateComponentResponsePrivate::CreateComponentResponsePrivate(
    CreateComponentResponse * const q) : ImageBuilderResponsePrivate(q)
{

}

/*!
 * Parses a ImageBuilder CreateComponent response element from \a xml.
 */
void CreateComponentResponsePrivate::parseCreateComponentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateComponentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ImageBuilder
} // namespace QtAws
