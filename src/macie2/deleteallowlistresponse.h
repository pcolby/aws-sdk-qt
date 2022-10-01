// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEALLOWLISTRESPONSE_H
#define QTAWS_DELETEALLOWLISTRESPONSE_H

#include "macie2response.h"
#include "deleteallowlistrequest.h"

namespace QtAws {
namespace Macie2 {

class DeleteAllowListResponsePrivate;

class QTAWSMACIE2_EXPORT DeleteAllowListResponse : public Macie2Response {
    Q_OBJECT

public:
    DeleteAllowListResponse(const DeleteAllowListRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAllowListRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAllowListResponse)
    Q_DISABLE_COPY(DeleteAllowListResponse)

};

} // namespace Macie2
} // namespace QtAws

#endif
