// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOBJECTATTRIBUTESRESPONSE_H
#define QTAWS_GETOBJECTATTRIBUTESRESPONSE_H

#include "clouddirectoryresponse.h"
#include "getobjectattributesrequest.h"

namespace QtAws {
namespace CloudDirectory {

class GetObjectAttributesResponsePrivate;

class QTAWSCLOUDDIRECTORY_EXPORT GetObjectAttributesResponse : public CloudDirectoryResponse {
    Q_OBJECT

public:
    GetObjectAttributesResponse(const GetObjectAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetObjectAttributesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetObjectAttributesResponse)
    Q_DISABLE_COPY(GetObjectAttributesResponse)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
