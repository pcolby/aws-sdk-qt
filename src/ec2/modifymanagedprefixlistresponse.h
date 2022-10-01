// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYMANAGEDPREFIXLISTRESPONSE_H
#define QTAWS_MODIFYMANAGEDPREFIXLISTRESPONSE_H

#include "ec2response.h"
#include "modifymanagedprefixlistrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyManagedPrefixListResponsePrivate;

class QTAWSEC2_EXPORT ModifyManagedPrefixListResponse : public Ec2Response {
    Q_OBJECT

public:
    ModifyManagedPrefixListResponse(const ModifyManagedPrefixListRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyManagedPrefixListRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyManagedPrefixListResponse)
    Q_DISABLE_COPY(ModifyManagedPrefixListResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
