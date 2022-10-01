// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHTYPEDLINKRESPONSE_H
#define QTAWS_DETACHTYPEDLINKRESPONSE_H

#include "clouddirectoryresponse.h"
#include "detachtypedlinkrequest.h"

namespace QtAws {
namespace CloudDirectory {

class DetachTypedLinkResponsePrivate;

class QTAWSCLOUDDIRECTORY_EXPORT DetachTypedLinkResponse : public CloudDirectoryResponse {
    Q_OBJECT

public:
    DetachTypedLinkResponse(const DetachTypedLinkRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DetachTypedLinkRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetachTypedLinkResponse)
    Q_DISABLE_COPY(DetachTypedLinkResponse)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
