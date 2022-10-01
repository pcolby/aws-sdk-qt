// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECOIPCIDRRESPONSE_H
#define QTAWS_DELETECOIPCIDRRESPONSE_H

#include "ec2response.h"
#include "deletecoipcidrrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteCoipCidrResponsePrivate;

class QTAWSEC2_EXPORT DeleteCoipCidrResponse : public Ec2Response {
    Q_OBJECT

public:
    DeleteCoipCidrResponse(const DeleteCoipCidrRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteCoipCidrRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCoipCidrResponse)
    Q_DISABLE_COPY(DeleteCoipCidrResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
