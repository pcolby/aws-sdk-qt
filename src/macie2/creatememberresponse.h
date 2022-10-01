// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMEMBERRESPONSE_H
#define QTAWS_CREATEMEMBERRESPONSE_H

#include "macie2response.h"
#include "creatememberrequest.h"

namespace QtAws {
namespace Macie2 {

class CreateMemberResponsePrivate;

class QTAWSMACIE2_EXPORT CreateMemberResponse : public Macie2Response {
    Q_OBJECT

public:
    CreateMemberResponse(const CreateMemberRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateMemberRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateMemberResponse)
    Q_DISABLE_COPY(CreateMemberResponse)

};

} // namespace Macie2
} // namespace QtAws

#endif
