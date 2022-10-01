// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWORLDTEMPLATEBODYRESPONSE_H
#define QTAWS_GETWORLDTEMPLATEBODYRESPONSE_H

#include "robomakerresponse.h"
#include "getworldtemplatebodyrequest.h"

namespace QtAws {
namespace RoboMaker {

class GetWorldTemplateBodyResponsePrivate;

class QTAWSROBOMAKER_EXPORT GetWorldTemplateBodyResponse : public RoboMakerResponse {
    Q_OBJECT

public:
    GetWorldTemplateBodyResponse(const GetWorldTemplateBodyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetWorldTemplateBodyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetWorldTemplateBodyResponse)
    Q_DISABLE_COPY(GetWorldTemplateBodyResponse)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
