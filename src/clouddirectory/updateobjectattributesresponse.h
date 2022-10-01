// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEOBJECTATTRIBUTESRESPONSE_H
#define QTAWS_UPDATEOBJECTATTRIBUTESRESPONSE_H

#include "clouddirectoryresponse.h"
#include "updateobjectattributesrequest.h"

namespace QtAws {
namespace CloudDirectory {

class UpdateObjectAttributesResponsePrivate;

class QTAWSCLOUDDIRECTORY_EXPORT UpdateObjectAttributesResponse : public CloudDirectoryResponse {
    Q_OBJECT

public:
    UpdateObjectAttributesResponse(const UpdateObjectAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateObjectAttributesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateObjectAttributesResponse)
    Q_DISABLE_COPY(UpdateObjectAttributesResponse)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
