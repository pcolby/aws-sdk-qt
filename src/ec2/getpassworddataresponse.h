// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPASSWORDDATARESPONSE_H
#define QTAWS_GETPASSWORDDATARESPONSE_H

#include "ec2response.h"
#include "getpassworddatarequest.h"

namespace QtAws {
namespace Ec2 {

class GetPasswordDataResponsePrivate;

class QTAWSEC2_EXPORT GetPasswordDataResponse : public Ec2Response {
    Q_OBJECT

public:
    GetPasswordDataResponse(const GetPasswordDataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetPasswordDataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPasswordDataResponse)
    Q_DISABLE_COPY(GetPasswordDataResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
