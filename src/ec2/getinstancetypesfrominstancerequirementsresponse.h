// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSTANCETYPESFROMINSTANCEREQUIREMENTSRESPONSE_H
#define QTAWS_GETINSTANCETYPESFROMINSTANCEREQUIREMENTSRESPONSE_H

#include "ec2response.h"
#include "getinstancetypesfrominstancerequirementsrequest.h"

namespace QtAws {
namespace Ec2 {

class GetInstanceTypesFromInstanceRequirementsResponsePrivate;

class QTAWSEC2_EXPORT GetInstanceTypesFromInstanceRequirementsResponse : public Ec2Response {
    Q_OBJECT

public:
    GetInstanceTypesFromInstanceRequirementsResponse(const GetInstanceTypesFromInstanceRequirementsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetInstanceTypesFromInstanceRequirementsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetInstanceTypesFromInstanceRequirementsResponse)
    Q_DISABLE_COPY(GetInstanceTypesFromInstanceRequirementsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
