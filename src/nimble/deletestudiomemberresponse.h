// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTUDIOMEMBERRESPONSE_H
#define QTAWS_DELETESTUDIOMEMBERRESPONSE_H

#include "nimbleresponse.h"
#include "deletestudiomemberrequest.h"

namespace QtAws {
namespace Nimble {

class DeleteStudioMemberResponsePrivate;

class QTAWSNIMBLE_EXPORT DeleteStudioMemberResponse : public NimbleResponse {
    Q_OBJECT

public:
    DeleteStudioMemberResponse(const DeleteStudioMemberRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteStudioMemberRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteStudioMemberResponse)
    Q_DISABLE_COPY(DeleteStudioMemberResponse)

};

} // namespace Nimble
} // namespace QtAws

#endif
