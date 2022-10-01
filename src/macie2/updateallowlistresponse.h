// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEALLOWLISTRESPONSE_H
#define QTAWS_UPDATEALLOWLISTRESPONSE_H

#include "macie2response.h"
#include "updateallowlistrequest.h"

namespace QtAws {
namespace Macie2 {

class UpdateAllowListResponsePrivate;

class QTAWSMACIE2_EXPORT UpdateAllowListResponse : public Macie2Response {
    Q_OBJECT

public:
    UpdateAllowListResponse(const UpdateAllowListRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateAllowListRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAllowListResponse)
    Q_DISABLE_COPY(UpdateAllowListResponse)

};

} // namespace Macie2
} // namespace QtAws

#endif
