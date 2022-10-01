// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVAULTSRESPONSE_H
#define QTAWS_LISTVAULTSRESPONSE_H

#include "glacierresponse.h"
#include "listvaultsrequest.h"

namespace QtAws {
namespace Glacier {

class ListVaultsResponsePrivate;

class QTAWSGLACIER_EXPORT ListVaultsResponse : public GlacierResponse {
    Q_OBJECT

public:
    ListVaultsResponse(const ListVaultsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListVaultsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListVaultsResponse)
    Q_DISABLE_COPY(ListVaultsResponse)

};

} // namespace Glacier
} // namespace QtAws

#endif
