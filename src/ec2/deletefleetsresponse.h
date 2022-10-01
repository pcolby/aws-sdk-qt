// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFLEETSRESPONSE_H
#define QTAWS_DELETEFLEETSRESPONSE_H

#include "ec2response.h"
#include "deletefleetsrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteFleetsResponsePrivate;

class QTAWSEC2_EXPORT DeleteFleetsResponse : public Ec2Response {
    Q_OBJECT

public:
    DeleteFleetsResponse(const DeleteFleetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteFleetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFleetsResponse)
    Q_DISABLE_COPY(DeleteFleetsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
