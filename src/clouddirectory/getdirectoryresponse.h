// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDIRECTORYRESPONSE_H
#define QTAWS_GETDIRECTORYRESPONSE_H

#include "clouddirectoryresponse.h"
#include "getdirectoryrequest.h"

namespace QtAws {
namespace CloudDirectory {

class GetDirectoryResponsePrivate;

class QTAWSCLOUDDIRECTORY_EXPORT GetDirectoryResponse : public CloudDirectoryResponse {
    Q_OBJECT

public:
    GetDirectoryResponse(const GetDirectoryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDirectoryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDirectoryResponse)
    Q_DISABLE_COPY(GetDirectoryResponse)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
