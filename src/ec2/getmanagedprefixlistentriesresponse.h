// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMANAGEDPREFIXLISTENTRIESRESPONSE_H
#define QTAWS_GETMANAGEDPREFIXLISTENTRIESRESPONSE_H

#include "ec2response.h"
#include "getmanagedprefixlistentriesrequest.h"

namespace QtAws {
namespace Ec2 {

class GetManagedPrefixListEntriesResponsePrivate;

class QTAWSEC2_EXPORT GetManagedPrefixListEntriesResponse : public Ec2Response {
    Q_OBJECT

public:
    GetManagedPrefixListEntriesResponse(const GetManagedPrefixListEntriesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetManagedPrefixListEntriesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetManagedPrefixListEntriesResponse)
    Q_DISABLE_COPY(GetManagedPrefixListEntriesResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
