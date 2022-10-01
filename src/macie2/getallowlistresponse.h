// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETALLOWLISTRESPONSE_H
#define QTAWS_GETALLOWLISTRESPONSE_H

#include "macie2response.h"
#include "getallowlistrequest.h"

namespace QtAws {
namespace Macie2 {

class GetAllowListResponsePrivate;

class QTAWSMACIE2_EXPORT GetAllowListResponse : public Macie2Response {
    Q_OBJECT

public:
    GetAllowListResponse(const GetAllowListRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAllowListRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAllowListResponse)
    Q_DISABLE_COPY(GetAllowListResponse)

};

} // namespace Macie2
} // namespace QtAws

#endif
