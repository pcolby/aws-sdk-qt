// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESUBNETRESPONSE_H
#define QTAWS_DELETESUBNETRESPONSE_H

#include "ec2response.h"
#include "deletesubnetrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteSubnetResponsePrivate;

class QTAWSEC2_EXPORT DeleteSubnetResponse : public Ec2Response {
    Q_OBJECT

public:
    DeleteSubnetResponse(const DeleteSubnetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteSubnetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSubnetResponse)
    Q_DISABLE_COPY(DeleteSubnetResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
