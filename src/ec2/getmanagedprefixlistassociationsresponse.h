// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMANAGEDPREFIXLISTASSOCIATIONSRESPONSE_H
#define QTAWS_GETMANAGEDPREFIXLISTASSOCIATIONSRESPONSE_H

#include "ec2response.h"
#include "getmanagedprefixlistassociationsrequest.h"

namespace QtAws {
namespace Ec2 {

class GetManagedPrefixListAssociationsResponsePrivate;

class QTAWSEC2_EXPORT GetManagedPrefixListAssociationsResponse : public Ec2Response {
    Q_OBJECT

public:
    GetManagedPrefixListAssociationsResponse(const GetManagedPrefixListAssociationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetManagedPrefixListAssociationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetManagedPrefixListAssociationsResponse)
    Q_DISABLE_COPY(GetManagedPrefixListAssociationsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
