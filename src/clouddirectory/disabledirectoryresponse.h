// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEDIRECTORYRESPONSE_H
#define QTAWS_DISABLEDIRECTORYRESPONSE_H

#include "clouddirectoryresponse.h"
#include "disabledirectoryrequest.h"

namespace QtAws {
namespace CloudDirectory {

class DisableDirectoryResponsePrivate;

class QTAWSCLOUDDIRECTORY_EXPORT DisableDirectoryResponse : public CloudDirectoryResponse {
    Q_OBJECT

public:
    DisableDirectoryResponse(const DisableDirectoryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisableDirectoryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableDirectoryResponse)
    Q_DISABLE_COPY(DisableDirectoryResponse)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
