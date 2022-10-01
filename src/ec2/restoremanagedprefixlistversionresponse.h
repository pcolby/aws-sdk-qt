// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREMANAGEDPREFIXLISTVERSIONRESPONSE_H
#define QTAWS_RESTOREMANAGEDPREFIXLISTVERSIONRESPONSE_H

#include "ec2response.h"
#include "restoremanagedprefixlistversionrequest.h"

namespace QtAws {
namespace Ec2 {

class RestoreManagedPrefixListVersionResponsePrivate;

class QTAWSEC2_EXPORT RestoreManagedPrefixListVersionResponse : public Ec2Response {
    Q_OBJECT

public:
    RestoreManagedPrefixListVersionResponse(const RestoreManagedPrefixListVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RestoreManagedPrefixListVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RestoreManagedPrefixListVersionResponse)
    Q_DISABLE_COPY(RestoreManagedPrefixListVersionResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
