// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELINKATTRIBUTESRESPONSE_H
#define QTAWS_UPDATELINKATTRIBUTESRESPONSE_H

#include "clouddirectoryresponse.h"
#include "updatelinkattributesrequest.h"

namespace QtAws {
namespace CloudDirectory {

class UpdateLinkAttributesResponsePrivate;

class QTAWSCLOUDDIRECTORY_EXPORT UpdateLinkAttributesResponse : public CloudDirectoryResponse {
    Q_OBJECT

public:
    UpdateLinkAttributesResponse(const UpdateLinkAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateLinkAttributesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateLinkAttributesResponse)
    Q_DISABLE_COPY(UpdateLinkAttributesResponse)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
