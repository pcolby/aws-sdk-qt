// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETJOBOUTPUTRESPONSE_H
#define QTAWS_GETJOBOUTPUTRESPONSE_H

#include "glacierresponse.h"
#include "getjoboutputrequest.h"

namespace QtAws {
namespace Glacier {

class GetJobOutputResponsePrivate;

class QTAWSGLACIER_EXPORT GetJobOutputResponse : public GlacierResponse {
    Q_OBJECT

public:
    GetJobOutputResponse(const GetJobOutputRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetJobOutputRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetJobOutputResponse)
    Q_DISABLE_COPY(GetJobOutputResponse)

};

} // namespace Glacier
} // namespace QtAws

#endif
