// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECHANNELMEMBERSHIPRESPONSE_H
#define QTAWS_DELETECHANNELMEMBERSHIPRESPONSE_H

#include "chimeresponse.h"
#include "deletechannelmembershiprequest.h"

namespace QtAws {
namespace Chime {

class DeleteChannelMembershipResponsePrivate;

class QTAWSCHIME_EXPORT DeleteChannelMembershipResponse : public ChimeResponse {
    Q_OBJECT

public:
    DeleteChannelMembershipResponse(const DeleteChannelMembershipRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteChannelMembershipRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteChannelMembershipResponse)
    Q_DISABLE_COPY(DeleteChannelMembershipResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
