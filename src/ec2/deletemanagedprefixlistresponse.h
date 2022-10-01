// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMANAGEDPREFIXLISTRESPONSE_H
#define QTAWS_DELETEMANAGEDPREFIXLISTRESPONSE_H

#include "ec2response.h"
#include "deletemanagedprefixlistrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteManagedPrefixListResponsePrivate;

class QTAWSEC2_EXPORT DeleteManagedPrefixListResponse : public Ec2Response {
    Q_OBJECT

public:
    DeleteManagedPrefixListResponse(const DeleteManagedPrefixListRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteManagedPrefixListRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteManagedPrefixListResponse)
    Q_DISABLE_COPY(DeleteManagedPrefixListResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
