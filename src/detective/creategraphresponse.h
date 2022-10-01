// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGRAPHRESPONSE_H
#define QTAWS_CREATEGRAPHRESPONSE_H

#include "detectiveresponse.h"
#include "creategraphrequest.h"

namespace QtAws {
namespace Detective {

class CreateGraphResponsePrivate;

class QTAWSDETECTIVE_EXPORT CreateGraphResponse : public DetectiveResponse {
    Q_OBJECT

public:
    CreateGraphResponse(const CreateGraphRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateGraphRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateGraphResponse)
    Q_DISABLE_COPY(CreateGraphResponse)

};

} // namespace Detective
} // namespace QtAws

#endif
