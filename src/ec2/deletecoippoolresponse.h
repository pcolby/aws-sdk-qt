// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECOIPPOOLRESPONSE_H
#define QTAWS_DELETECOIPPOOLRESPONSE_H

#include "ec2response.h"
#include "deletecoippoolrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteCoipPoolResponsePrivate;

class QTAWSEC2_EXPORT DeleteCoipPoolResponse : public Ec2Response {
    Q_OBJECT

public:
    DeleteCoipPoolResponse(const DeleteCoipPoolRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteCoipPoolRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCoipPoolResponse)
    Q_DISABLE_COPY(DeleteCoipPoolResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
