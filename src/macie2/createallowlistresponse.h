// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEALLOWLISTRESPONSE_H
#define QTAWS_CREATEALLOWLISTRESPONSE_H

#include "macie2response.h"
#include "createallowlistrequest.h"

namespace QtAws {
namespace Macie2 {

class CreateAllowListResponsePrivate;

class QTAWSMACIE2_EXPORT CreateAllowListResponse : public Macie2Response {
    Q_OBJECT

public:
    CreateAllowListResponse(const CreateAllowListRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateAllowListRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAllowListResponse)
    Q_DISABLE_COPY(CreateAllowListResponse)

};

} // namespace Macie2
} // namespace QtAws

#endif
