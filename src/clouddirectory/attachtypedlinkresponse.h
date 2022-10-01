// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHTYPEDLINKRESPONSE_H
#define QTAWS_ATTACHTYPEDLINKRESPONSE_H

#include "clouddirectoryresponse.h"
#include "attachtypedlinkrequest.h"

namespace QtAws {
namespace CloudDirectory {

class AttachTypedLinkResponsePrivate;

class QTAWSCLOUDDIRECTORY_EXPORT AttachTypedLinkResponse : public CloudDirectoryResponse {
    Q_OBJECT

public:
    AttachTypedLinkResponse(const AttachTypedLinkRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AttachTypedLinkRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AttachTypedLinkResponse)
    Q_DISABLE_COPY(AttachTypedLinkResponse)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
