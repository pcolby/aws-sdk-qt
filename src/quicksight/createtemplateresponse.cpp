// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createtemplateresponse.h"
#include "createtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::CreateTemplateResponse
 * \brief The CreateTemplateResponse class provides an interace for QuickSight CreateTemplate responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::createTemplate
 */

/*!
 * Constructs a CreateTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
CreateTemplateResponse::CreateTemplateResponse(
        const CreateTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new CreateTemplateResponsePrivate(this), parent)
{
    setRequest(new CreateTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateTemplateRequest * CreateTemplateResponse::request() const
{
    Q_D(const CreateTemplateResponse);
    return static_cast<const CreateTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight CreateTemplate \a response.
 */
void CreateTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::CreateTemplateResponsePrivate
 * \brief The CreateTemplateResponsePrivate class provides private implementation for CreateTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a CreateTemplateResponsePrivate object with public implementation \a q.
 */
CreateTemplateResponsePrivate::CreateTemplateResponsePrivate(
    CreateTemplateResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight CreateTemplate response element from \a xml.
 */
void CreateTemplateResponsePrivate::parseCreateTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
