// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPLYSCHEMARESPONSE_H
#define QTAWS_APPLYSCHEMARESPONSE_H

#include "clouddirectoryresponse.h"
#include "applyschemarequest.h"

namespace QtAws {
namespace CloudDirectory {

class ApplySchemaResponsePrivate;

class QTAWSCLOUDDIRECTORY_EXPORT ApplySchemaResponse : public CloudDirectoryResponse {
    Q_OBJECT

public:
    ApplySchemaResponse(const ApplySchemaRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ApplySchemaRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ApplySchemaResponse)
    Q_DISABLE_COPY(ApplySchemaResponse)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
