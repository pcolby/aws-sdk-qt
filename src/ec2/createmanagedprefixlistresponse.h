// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMANAGEDPREFIXLISTRESPONSE_H
#define QTAWS_CREATEMANAGEDPREFIXLISTRESPONSE_H

#include "ec2response.h"
#include "createmanagedprefixlistrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateManagedPrefixListResponsePrivate;

class QTAWSEC2_EXPORT CreateManagedPrefixListResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateManagedPrefixListResponse(const CreateManagedPrefixListRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateManagedPrefixListRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateManagedPrefixListResponse)
    Q_DISABLE_COPY(CreateManagedPrefixListResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
