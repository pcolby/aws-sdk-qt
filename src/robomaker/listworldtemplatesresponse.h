// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWORLDTEMPLATESRESPONSE_H
#define QTAWS_LISTWORLDTEMPLATESRESPONSE_H

#include "robomakerresponse.h"
#include "listworldtemplatesrequest.h"

namespace QtAws {
namespace RoboMaker {

class ListWorldTemplatesResponsePrivate;

class QTAWSROBOMAKER_EXPORT ListWorldTemplatesResponse : public RoboMakerResponse {
    Q_OBJECT

public:
    ListWorldTemplatesResponse(const ListWorldTemplatesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListWorldTemplatesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListWorldTemplatesResponse)
    Q_DISABLE_COPY(ListWorldTemplatesResponse)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
