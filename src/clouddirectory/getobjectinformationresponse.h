// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOBJECTINFORMATIONRESPONSE_H
#define QTAWS_GETOBJECTINFORMATIONRESPONSE_H

#include "clouddirectoryresponse.h"
#include "getobjectinformationrequest.h"

namespace QtAws {
namespace CloudDirectory {

class GetObjectInformationResponsePrivate;

class QTAWSCLOUDDIRECTORY_EXPORT GetObjectInformationResponse : public CloudDirectoryResponse {
    Q_OBJECT

public:
    GetObjectInformationResponse(const GetObjectInformationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetObjectInformationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetObjectInformationResponse)
    Q_DISABLE_COPY(GetObjectInformationResponse)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
