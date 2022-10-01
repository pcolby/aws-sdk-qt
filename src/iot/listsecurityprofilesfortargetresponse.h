// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSECURITYPROFILESFORTARGETRESPONSE_H
#define QTAWS_LISTSECURITYPROFILESFORTARGETRESPONSE_H

#include "iotresponse.h"
#include "listsecurityprofilesfortargetrequest.h"

namespace QtAws {
namespace IoT {

class ListSecurityProfilesForTargetResponsePrivate;

class QTAWSIOT_EXPORT ListSecurityProfilesForTargetResponse : public IoTResponse {
    Q_OBJECT

public:
    ListSecurityProfilesForTargetResponse(const ListSecurityProfilesForTargetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSecurityProfilesForTargetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSecurityProfilesForTargetResponse)
    Q_DISABLE_COPY(ListSecurityProfilesForTargetResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
