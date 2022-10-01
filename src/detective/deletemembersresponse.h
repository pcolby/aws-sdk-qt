// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMEMBERSRESPONSE_H
#define QTAWS_DELETEMEMBERSRESPONSE_H

#include "detectiveresponse.h"
#include "deletemembersrequest.h"

namespace QtAws {
namespace Detective {

class DeleteMembersResponsePrivate;

class QTAWSDETECTIVE_EXPORT DeleteMembersResponse : public DetectiveResponse {
    Q_OBJECT

public:
    DeleteMembersResponse(const DeleteMembersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteMembersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMembersResponse)
    Q_DISABLE_COPY(DeleteMembersResponse)

};

} // namespace Detective
} // namespace QtAws

#endif
