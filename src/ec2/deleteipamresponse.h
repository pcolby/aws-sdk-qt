// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIPAMRESPONSE_H
#define QTAWS_DELETEIPAMRESPONSE_H

#include "ec2response.h"
#include "deleteipamrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteIpamResponsePrivate;

class QTAWSEC2_EXPORT DeleteIpamResponse : public Ec2Response {
    Q_OBJECT

public:
    DeleteIpamResponse(const DeleteIpamRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteIpamRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteIpamResponse)
    Q_DISABLE_COPY(DeleteIpamResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
